
int red_light_pin= 11;
int green_light_pin = 10;
int blue_light_pin = 9;

int red_light_value = 128;
int green_light_value = 128;
int blue_light_value = 128;

int color = 0;
int cant = 0;
int desc = 0;

void setup()
{
  //Serial.begin(9600);

  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);

  red_light_value = random(1,254);
  analogWrite(red_light_pin, red_light_value);

  green_light_value = random(1,254);
  analogWrite(green_light_pin, green_light_value);

  blue_light_value = random(1,254);
  analogWrite(blue_light_pin, blue_light_value);
}

void loop()
{

  color = random(1,4);          // 1= RED         2= GREEN        3= BLUE
  cant = random(0,2);           // 0= MENOS       1= MAS
  desc = random(1,4);

 
  if(color == 1)
  {
    if(cant == 0 && red_light_value > 0)
    {
      red_light_value = red_light_value - desc;
      if(red_light_value < 0)
      {
        red_light_value = 0;
      }

      if(red_light_value > 255)
      {
        red_light_value = 255;
      }

      
      analogWrite(red_light_pin, red_light_value);
    }
    if(cant == 1 && red_light_value < 255)
    {
      red_light_value = red_light_value + desc;
      if(red_light_value < 0)
      {
        red_light_value = 0;
      }

      if(red_light_value > 255)
      {
        red_light_value = 255;
      }
      
      analogWrite(red_light_pin, red_light_value);
    }
  }


  if(color == 2)
  {
    if(cant == 0 && green_light_value > 0)
    {
      green_light_value = green_light_value - desc;
      if(green_light_value < 0)
      {
        green_light_value = 0;
      }

      if(green_light_value > 255)
      {
        green_light_value = 255;
      }
      
      analogWrite(green_light_pin, green_light_value);
    }
    if(cant == 1 && green_light_value < 255)
    {
      green_light_value = green_light_value + desc;
      if(green_light_value < 0)
      {
        green_light_value = 0;
      }

      if(green_light_value > 255)
      {
        green_light_value = 255;
      }
      
      analogWrite(green_light_pin, green_light_value);
    }
  }



  if(color == 3)
  {
    if(cant == 0 && blue_light_value > 0)
    {
      blue_light_value = blue_light_value - desc;
      if(blue_light_value < 0)
      {
        blue_light_value = 0;
      }

      if(blue_light_value > 255)
      {
        blue_light_value = 255;
      }
      
      analogWrite(blue_light_pin, blue_light_value);
    }
    if(cant == 1 && blue_light_value < 255)
    {
      blue_light_value = blue_light_value + desc;
      if(blue_light_value < 0)
      {
        blue_light_value = 0;
      }

      if(blue_light_value > 255)
      {
        blue_light_value = 255;
      }
      
      analogWrite(blue_light_pin, blue_light_value);
    }
  }

  




  
  
  //Serial.print(red_light_value);
  //Serial.print(",");
  //Serial.print(green_light_value);
  //Serial.print(",");
  //Serial.println(blue_light_value);
  //Serial.print("desc= ");
  //Serial.println(desc);
  
  delay(20);
}
