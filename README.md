# tMood 

Social awkward????  Get tMood!!!
Lack of conversation flow????   Get tMood!!!!    
Not understanding social norms??? GET  tMood!!!!

Many of us have experienced some awkward silences moments, and having trouble breaking the ice, but right now, these situations won’t happen to you any more because of the tMood!
tMood is an app in Pebble watch that detecting the atmosphere of the given location based on tweets. It displays random 16 sentiments of tweets from latest 50 tweets.

[`IBM Alchemy API`](http://www.alchemyapi.com/) [`Twitter REST API`](https://dev.twitter.com/rest/public) [`Python Anywhere`](https://www.pythonanywhere.com)

##  More about tMood
app.js app that analyses the sentiment level of people around you using tweeter feeds is developed during [bitcamp](http://bitca.mp/) hackathon. 

- The backend service is hosted in pythonanywhere.com and we are using flask web framework for handling requests.
- It accepts input requests in the form of a JSON array containing list of place names.
- This is then used to get the tweets around the list of places.
- We use sentiment classifier by IBM Alchemy to get the tweet sentiments.
- Then we randomly select 16 tweets along with their sentiments and return it in JSON format.
- It is then used to display 16 smileys on the screen of the watch depending on the sentiment of the tweet.
- On clicking the smiley you can view the complete tweet and also you can shake your watch to view random tweet and ots sentiment
- Front end is developed in Javascript

Extra - 
pebble.js and main.c includes our effort to draw the smiley using shapes which is developed in C.
However this is not integrated with backend as of yet.
 
## Video
- [tMood Demo Video](https://www.youtube.com/watch?v=PlnMDUieuKc)
- [tMood team @ Bitcamp 2015 Expo](https://youtu.be/8Api3UESO1c?t=1h53m10s)

## Links to separet repo
- [tMood backend](https://github.com/chetannaik/tMood)
- [tMood application](https://github.com/yiochen/tMood)
- [tMood drawingsmiley](https://github.com/kavanaanand09/Emotter)

## Team:
- Chetan Naik
- Kavana Anand
- Jie Liang
- Yiou Chen