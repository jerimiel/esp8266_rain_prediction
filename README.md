# esp8266_rain_prediction
A project to run an ML model for rainfall prediction on an ESP8266 microcontroller

The idea of the project is to be able to allow a microcontroller make decisions such as informing home occupants or controlling servos to close windows when there is rainfall. Temperature and humidity readings were collected over a period using the DHT22 sensor. These values were then leaned and stored in the file, separated_values.csv located in the data folder. A logistic regression model was used to train the data and an f1-score of 96.6% was attained.

Next, the model was deployed on the esp8266 wemos mini d1 microcontroller by extracting the weights and intercept from the Loggistic Regression model.
