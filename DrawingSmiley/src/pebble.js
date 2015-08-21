/*
 * pebble-js-app.js
 * Sends the sample message once it is initialized.
 */

Pebble.addEventListener('ready', function(e) {
  console.log('PebbleKit JS Ready!');
  //"http://api.openweathermap.org/data/2.5/weather?q=London,uk"
  
  var response;
  var req = new XMLHttpRequest();
  req.open("GET","http://chetannaik.pythonanywhere.com/query/bitcamp",false);
  req.send(null);
  response = req.responseText;
  
  
  var json = JSON.parse(response).response; 

 
  // Construct a dictionary
  var dict = {
//     'KEY_DATA':response
    'KEY_DATA1':json[0].sentiment,
    'KEY_DATA2':json[1].sentiment,
    'KEY_DATA3':json[2].sentiment,
    'KEY_DATA4':json[3].sentiment,
    'KEY_DATA5':json[4].sentiment,
    'KEY_DATA6':json[5].sentiment,
    'KEY_DATA7':json[6].sentiment,
    'KEY_DATA8':json[7].sentiment,
    'KEY_DATA9':json[8].sentiment,
    'KEY_DATA10':json[9].sentiment,
    'KEY_DATA11':json[10].sentiment,
    'KEY_DATA12':json[11].sentiment,
    'KEY_DATA13':json[12].sentiment,
    'KEY_DATA14':json[13].sentiment,
    'KEY_DATA15':json[14].sentiment,
    'KEY_DATA16':json[15].sentiment
  };

  // Send a string to Pebble
  Pebble.sendAppMessage(dict,
    function(e) {
      console.log('Send successful.');
    },
    function(e) {
      console.log('Send failed!');
    }
  );
});