int prediction(float temperature, float humidity)
{
  double intercept = 343.30254586109317;
  double coefficients[2]{-6.39460386, -1.98640871}; //feature coefficients
  double calc = intercept + temperature*coefficients[0] + humidity*coefficients[1];
  double pred = 1 / (1 + exp(-calc));
  if (pred >= 0.5){return 1;}
  else{return 0;}
}