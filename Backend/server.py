from alchemyapi import AlchemyAPI
from flask import Flask
import twitter
import json
import random

app = Flask(__name__)


def get_twitter_api():
    CONSUMER_KEY = 'ADD'
    CONSUMER_SECRET = 'ADD'
    OAUTH_TOKEN = 'ADD'
    OAUTH_TOKEN_SECRET = 'ADD'

    twitter_api = twitter.Api(consumer_key=CONSUMER_KEY,
                              consumer_secret=CONSUMER_SECRET,
                              access_token_key=OAUTH_TOKEN,
                              access_token_secret=OAUTH_TOKEN_SECRET)
    return twitter_api


def get_sentiment(places):
    twitter_api = get_twitter_api()
    alchemy_api = AlchemyAPI()

    sentiments = dict()
    for place in places:
        r = twitter_api.GetSearch(term=place, count=10)
        for tw in r:
            txt = tw.GetText()
            response = alchemy_api.sentiment('text', txt)
            if response['status'] == 'OK':
                sentiments[txt] = str(response['docSentiment']['type'])

    ret_list = []
    for t, s in sentiments.iteritems():
        ret_json = dict()
        ret_json["tweet"] = t
        ret_json["sentiment"] = s
        ret_list.append(ret_json)

    list_len = 16

    if len(ret_list) > list_len:
        ret_list = random.sample(ret_list, 16)
    else:
        for i in xrange(len(ret_list), list_len):
            ret_list.append({"No Tweet": "neutral"})
    print ret_list
    return ret_list


@app.route("/")
def hello():
    return "Call the service at /location/<lat,long> or /query/<string>"


@app.route('/location/<int:lat>,<int:long>', methods=['GET'])
def get_location():
    return "Coming Soon!"


@app.route('/query/<path:query>', methods=['GET'])
def get_query(query):
    places = json.loads(query)
    ret_list = get_sentiment(places)
    ret_fmt = {'response': ret_list}
    my_ret = json.dumps(ret_fmt)
    return my_ret


if __name__ == "__main__":
    app.run()
