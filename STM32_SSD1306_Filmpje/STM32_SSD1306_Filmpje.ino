#include <Adafruit_GFX.h>  // Include core graphics library for the display
#include <Adafruit_SSD1306.h>  // Include Adafruit_SSD1306 library to drive the display

Adafruit_SSD1306 display(128, 64);

#include <Fonts/FreeMonoBold12pt7b.h>
#include <Fonts/FreeMono9pt7b.h>

void setup()  // Start of setup
{                
  delay(100);  // This delay is needed to let the display to initialize
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // Initialize display with the I2C address of 0x3C
  display.clearDisplay();  // Clear the buffer
  display.setTextColor(WHITE);  // Set color of the text
  display.setRotation(0);  // Set orientation. Goes from 0, 1, 2 or 3
  display.setTextWrap(false);  // Make a virtual plane to draw off the display
  display.dim(0);  //Set brightness (0 is maximun and 1 is a little dim)
}  // End of setup

void loop()
{
  display.setFont(&FreeMonoBold12pt7b);
  display.setTextSize(0);
  countDown();
  display.setFont(&FreeMono9pt7b);
  title();
  introduction();
  scene1();
  comment();
  scene2();
  scene3();
  scene4();
  scene5();
  scene6();
  ending();
  thanksTo();
  names();
}

void countDown()
{
  for (int intro = 5; intro > 0; intro--)
  {
    display.clearDisplay(); //Clear the dislplay
    display.drawCircle(61, 34, 15, WHITE); //Draw circle (x,y,radius,color)
    display.setCursor(55, 40); //Set the starting point of the text (x,y)
    display.println(intro); //Text or value to print // intro-countdown
    display.display(); //Display the above code
    delay(1000);
  }
}

void title()
{
  delay(500);
  display.clearDisplay(); //Clear the dislplay
  display.drawRoundRect(0, 10, 127, 40, 8, WHITE); // Draw rounded rectangle (x,y,width,height,radius,color)
  display.setCursor(2, 25); //Set the starting point of the text (x,y)
  display.println("'A walk in\n  2020...'"); //Text or value to print
  display.display(); //Display the above code
  delay(3000);
}

void introduction()
{
  delay(500);
  display.clearDisplay(); //Clear the dislplay
  display.drawRect(0, 10, 127, 40, WHITE); // Draw rectangle (x,y,width,height,color)
  display.setCursor(2, 25); //Set the starting point of the text (x,y)
  display.println(" Once upon\n  a time: "); //Text or value to print
  display.display(); //Display the above code
  delay(2000);
}

void scene1()
{
  int j = 0;
  for (int i = 0; i < 128; i++)
  {
    if (i%2 == 0)
    {
      j = 1;
    }
    else
    {
      j = 0;
    }
    display.clearDisplay(); //Clear the dislplay
    display.fillCircle(0, 0, 20, WHITE); //Draw filled circle (x,y,radius,color) // Zon
    display.drawLine(9, 23, 11+j, 30+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 1
    display.drawLine(18, 18, 24+j, 23+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 2
    display.drawLine(23, 8, 32+j, 12+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 3
    display.drawLine(2+i, 63+j, 8+i, 55+j, WHITE); // Draw line (x0,y0,x1,y1,color) // Linkerbeen
    display.drawLine(8+i, 55+j, 12+i, 63+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Rechterbeen
    display.drawLine(8+i, 55+j, 8+i, 44+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Lichaampie
    display.drawLine(8+i, 49+j, 2+i, 46+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Linkerarm
    display.drawLine(8+i, 49+j, 16+i, 45+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Rechterarm
    display.drawCircle(8+i, 39+j, 5, WHITE); //  Draw circle (x,y,radius,color) //Heufd
    display.drawPixel(6+i, 38+j, WHITE); // Draw single pixel (x,y,color) //Linkeroog
    display.drawPixel(10+i, 38+j, WHITE); // Draw single pixel (x,y,color) //Rechteroog
    display.drawLine(6+i, 41+j, 10+i, 41+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Mond deel 1
    display.drawLine(5+i, 40+j, 6+i, 40+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Mond deel 2
    display.drawPixel(10+i, 40+j, WHITE); //Draw single pixel (x,y,color) //Mond deel 3
    display.display(); //Display the above code
    delay(50);
  }
}

void comment()
{
  delay(500);
  display.clearDisplay(); //Clear the dislplay
  display.drawRect(15, 5, 100, 55, WHITE); // Draw rectangle (x,y,width,height,color)
  display.setCursor(2, 18); //Set the starting point of the text (x,y)
  display.println("   One \n  eternity \n  later..."); //Text or value to print
  display.display(); //Display the above code
  delay(3000);
}

void scene2()
{
  int j = 0;
  for (int i = 0; i < 128; i++)
  {
    if (i%2 == 0)
    {
      j = 1;
    }
    else
    {
      j = 0;
    }
    display.clearDisplay(); //Clear the dislplay
    display.fillCircle(0, 0, 20, WHITE); //Draw filled circle (x,y,radius,color) // Zon
    display.drawLine(9, 23, 11+j, 30+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 1
    display.drawLine(18, 18, 24+j, 23+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 2
    display.drawLine(23, 8, 32+j, 12+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 3
    display.drawLine(2+i, 63+j, 8+i, 55+j, WHITE); //Draw line (x0,y0,x1,y1,color) // Linkerbeen
    display.drawLine(8+i, 55+j, 12+i, 63+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Rechterbeen
    display.drawLine(8+i, 55+j, 8+i, 44+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Lichaampie
    display.drawLine(8+i, 49+j, 2+i, 46+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Linkerarm
    display.drawLine(8+i, 49+j, 16+i, 45+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Rechterarm
    display.drawCircle(8+i, 39+j, 5, WHITE); //  Draw circle (x,y,radius,color) //Heufd
    display.drawPixel(6+i, 38+j, WHITE); // Draw single pixel (x,y,color) //Linkeroog
    display.drawPixel(10+i, 38+j, WHITE); // Draw single pixel (x,y,color) //Rechteroog
    display.drawLine(6+i, 41+j, 10+i, 41+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Mond deel 1
    display.drawLine(5+i, 40+j, 6+i, 40+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Mond deel 2
    display.drawPixel(10+i, 40+j, WHITE); // Draw single pixel (x,y,color) //Mond deel 3
    display.display(); //Display the above code
    delay(50);
  }
}

void scene3()
{
  int j, k, l, m;
  for (int i = 0; i < 60; i++)
  {
    k = i - 15;
    l = k - 10;
    m = l - 10;
    if (i%2 == 0)
    {
      j = 1;
    }
    else
    {
      j = 0;
    }
    display.clearDisplay(); //Clear the dislplay
    display.fillCircle(0, 0, 20, WHITE); //Draw filled circle (x,y,radius,color) // Zon
    display.drawLine(9, 23, 11+j, 30+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 1
    display.drawLine(18, 18, 24+j, 23+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 2
    display.drawLine(23, 8, 32+j, 12+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 3
    display.drawLine(2+i, 63+j, 8+i, 55+j, WHITE); //Draw line (x0,y0,x1,y1,color) // Linkerbeen
    display.drawLine(8+i, 55+j, 12+i, 63+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Rechterbeen
    display.drawLine(8+i, 55+j, 8+i, 44+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Lichaampie
    display.drawLine(8+i, 49+j, 2+i, 46+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Linkerarm
    display.drawLine(8+i, 49+j, 16+i, 45+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Rechterarm
    display.drawCircle(8+i, 39+j, 5, WHITE); //  Draw circle (x,y,radius,color) //Heufd
    display.drawPixel(6+i, 38+j, WHITE); // Draw single pixel (x,y,color) //Linkeroog
    display.drawPixel(10+i, 38+j, WHITE); // Draw single pixel (x,y,color) //Rechteroog
    display.drawLine(6+i, 41+j, 10+i, 41+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Mond deel 1
    display.drawLine(5+i, 40+j, 6+i, 40+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Mond deel 2
    display.drawPixel(10+i, 40+j, WHITE); // Draw single pixel (x,y,color) //Mond deel 3
    display.drawLine(127, 45, 100 , 45, WHITE); // Draw line (x0,y0,x1,y1,color) //Grond deel 1
    display.drawLine(100, 45, 75 , 63, WHITE); // Draw line (x0,y0,x1,y1,color) //Grond deel 2
    display.drawLine(105, 45, 114, 16, WHITE); // Draw line (x0,y0,x1,y1,color) //Mast deel 1
    display.drawLine(114, 16, 124 , 45, WHITE); // Draw line (x0,y0,x1,y1,color) //Mast deel 2
    display.drawLine(124, 45, 110 , 30, WHITE); // Draw line (x0,y0,x1,y1,color) //Mast deel 3
    display.drawLine(105, 45, 119 , 30, WHITE); // Draw line (x0,y0,x1,y1,color) //Mast deel 4
    display.drawCircle(114, 11, 5, WHITE); //  Draw circle (x,y,radius,color) //Mast deel 5
    display.drawCircle(114, 11, i, WHITE); //  Draw circle (x,y,radius,color) //Straling 1
    display.drawCircle(114, 11, 5+k, WHITE); //  Draw circle (x,y,radius,color) //Straling 2
    display.drawCircle(114, 11, 5+l, WHITE); //  Draw circle (x,y,radius,color) //Straling 3
    display.drawCircle(114, 11, 5+m, WHITE); //  Draw circle (x,y,radius,color) //Straling 4
    display.drawCircle(114, 11, 5+j, WHITE); //  Draw circle (x,y,radius,color) //Stralings bol
    display.display(); //Display the above code
    delay(50);
  }
}

void scene4()
{
  int j, k, l, m;
  for (int i = 0; i < 60; i++)
  {
    k = i - 15;
    l = k - 10;
    m = l - 10;
    if (i%2 == 0)
    {
      j = 1;
    }
    else
    {
      j = 0;
    }
    display.clearDisplay(); //Clear the dislplay
    display.fillCircle(0, 0, 20, WHITE); // Draw filled circle (x,y,radius,color) // Zon
    display.drawLine(9, 23, 11+j, 30+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 1
    display.drawLine(18, 18, 24+j, 23+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 2
    display.drawLine(23, 8, 32+j, 12+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 3
    display.drawLine(62, 63, 68, 55, WHITE); // Draw line (x0,y0,x1,y1,color) // Linkerbeen
    display.drawLine(68, 55, 72, 63, WHITE); // Draw line (x0,y0,x1,y1,color) //Rechterbeen
    display.drawLine(68, 55, 68, 44, WHITE); // Draw line (x0,y0,x1,y1,color) //Lichaampie
    display.drawLine(68, 49, 62, 46, WHITE); // Draw line (x0,y0,x1,y1,color) //Linkerarm
    display.drawLine(68, 49, 76, 45, WHITE); // Draw line (x0,y0,x1,y1,color) //Rechterarm
    display.drawCircle(68, 39, 5, WHITE); //  Draw circle (x,y,radius,color) //Heufd
    display.drawPixel(66, 38, WHITE); // Draw single pixel (x,y,color) //Linkeroog
    display.drawPixel(70, 38, WHITE); // Draw single pixel (x,y,color) //Rechteroog
    display.drawLine(66, 41, 70, 41, WHITE); // Draw line (x0,y0,x1,y1,color) //Mond deel 1
    display.drawLine(65, 40, 66, 40, WHITE); // Draw line (x0,y0,x1,y1,color) //Mond deel 2
    display.drawPixel(70, 40, WHITE); // Draw single pixel (x,y,color) //Mond deel 3
    display.drawLine(127, 45, 100, 45, WHITE); // Draw line (x0,y0,x1,y1,color) //Grond deel 1
    display.drawLine(100, 45, 75, 63, WHITE); // Draw line (x0,y0,x1,y1,color) //Grond deel 2
    display.drawLine(105, 45, 114, 16, WHITE); // Draw line (x0,y0,x1,y1,color) //Mast deel 1
    display.drawLine(114, 16, 124 , 45, WHITE); // Draw line (x0,y0,x1,y1,color) //Mast deel 2
    display.drawLine(124, 45, 110 , 30, WHITE); // Draw line (x0,y0,x1,y1,color) //Mast deel 3
    display.drawLine(105, 45, 119 , 30, WHITE); // Draw line (x0,y0,x1,y1,color) //Mast deel 4
    display.drawCircle(114, 11, 5, WHITE); //  Draw circle (x,y,radius,color) //Mast deel 5
    display.drawCircle(114, 11, i, WHITE); //  Draw circle (x,y,radius,color) //Straling 1
    display.drawCircle(114, 11, 5+k, WHITE); //  Draw circle (x,y,radius,color) //Straling 2
    display.drawCircle(114, 11, 5+l, WHITE); //  Draw circle (x,y,radius,color) //Straling 3
    display.drawCircle(114, 11, 5+m, WHITE); //  Draw circle (x,y,radius,color) //Straling 4
    display.drawCircle(114, 11, 5+j, WHITE); //  Draw circle (x,y,radius,color) //Stralings bol
    display.display(); //Display the above code
    delay(50);
  }
}

void scene5()
{
  int j, k, l, m;
  for (int i = 0; i < 60; i++)
  {
    k = i - 15;
    l = k - 10;
    m = l - 10;
    if (i%2 == 0)
    {
      j = 1;
    }
    else
    {
      j = 0;
    }
    display.clearDisplay(); //Clear the dislplay
    display.fillCircle(0, 0, 20, WHITE); // Draw filled circle (x,y,radius,color) // Zon
    display.drawLine(9, 23, 11+j, 30+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 1
    display.drawLine(18, 18, 24+j, 23+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 2
    display.drawLine(23, 8, 32+j, 12+j, WHITE); // Draw line (x0,y0,x1,y1,color) //Zonnestraal 3
    display.drawLine(69, 63, 65, 58, WHITE);  // Draw line (x0,y0,x1,y1,color) // Linkerbeen
    display.drawLine(70, 53, 65, 58, WHITE); // Draw line (x0,y0,x1,y1,color) //Rechterbeen
    display.drawLine(65, 58, 50, 58, WHITE); // Draw line (x0,y0,x1,y1,color) //Lichaampie
    display.drawLine(57, 58, 52, 63, WHITE); // Draw line (x0,y0,x1,y1,color) //Linkerarm
    display.drawLine(57, 58, 52, 51, WHITE); // Draw line (x0,y0,x1,y1,color) //Rechterarm
    display.drawCircle(45, 58, 5, WHITE); //  Draw circle (x,y,radius,color) //Heufd
    display.drawLine(127, 45, 100, 45, WHITE); // Draw line (x0,y0,x1,y1,color) //Grond deel 1
    display.drawLine(100, 45, 75, 63, WHITE); // Draw line (x0,y0,x1,y1,color) //Grond deel 2
    display.drawLine(105, 45, 114, 16, WHITE); // Draw line (x0,y0,x1,y1,color) //Mast deel 1
    display.drawLine(114, 16, 124 , 45, WHITE); // Draw line (x0,y0,x1,y1,color) //Mast deel 2
    display.drawLine(124, 45, 110 , 30, WHITE); // Draw line (x0,y0,x1,y1,color) //Mast deel 3
    display.drawLine(105, 45, 119 , 30, WHITE); // Draw line (x0,y0,x1,y1,color) //Mast deel 4
    display.drawCircle(114, 11, 5, WHITE); //  Draw circle (x,y,radius,color) //Mast deel 5
    display.drawCircle(114, 11, i, WHITE); //  Draw circle (x,y,radius,color) //Straling 1
    display.drawCircle(114, 11, 5+k, WHITE); //  Draw circle (x,y,radius,color) //Straling 2
    display.drawCircle(114, 11, 5+l, WHITE); //  Draw circle (x,y,radius,color) //Straling 3
    display.drawCircle(114, 11, 5+m, WHITE); //  Draw circle (x,y,radius,color) //Straling 4
    display.drawCircle(114, 11, 5+j, WHITE); //  Draw circle (x,y,radius,color) //Stralings bol
    display.display(); //Display the above code
    delay(50);
  }
}

void scene6()
{
  display.clearDisplay(); //Clear the dislplay
  display.drawCircle(63, 31, 25, WHITE); //Draw filled circle (x,y,radius,color) // Heufd
  display.drawLine(56, 23, 64, 19, WHITE); //Draw line (x0,y0,x1,y1,color) // Kruis 1.1
  display.drawLine(60, 25, 60, 17, WHITE); //Draw line (x0,y0,x1,y1,color) // Kruis 1.2
  display.drawLine(52, 35, 59, 33, WHITE); //Draw line (x0,y0,x1,y1,color) // Kruis 2.1
  display.drawLine(55, 30, 57, 38, WHITE); //Draw line (x0,y0,x1,y1,color) // Kruis 2.2
  display.drawLine(84, 46, 110, 63, WHITE); //Draw line (x0,y0,x1,y1,color) // Lichaampie
  display.display(); //Display the above code
  delay(1500);
}

void ending()
{
  display.clearDisplay(); //Clear the dislplay
  display.drawRect(5, 15, 107, 33, WHITE); // Draw rectangle (x,y,width,height,color)
  display.setCursor(18, 35); //Set the starting point of the text (x,y)
  display.println("The end!"); //Text or value to print
  display.display(); //Display the above code
  delay(2000);
}

void thanksTo()
{
  display.clearDisplay(); //Clear the dislplay
  display.drawRect(5, 15, 118, 33, WHITE); // Draw rectangle (x,y,width,height,color)
  display.setCursor(10, 35); //Set the starting point of the text (x,y)
  display.println("Thanks to:"); //Text or value to print
  display.display(); //Display the above code
  delay(1000);
}

void names()
{
  display.clearDisplay(); //Clear the dislplay
  display.drawRect(23, 9, 85, 55, WHITE); // Draw rectangle (x,y,width,height,color)
  display.setCursor(0, 23); //Set the starting point of the text (x,y)
  display.println("    5G,\n   Olaf &\n   Arthur"); //Text or value to print
  display.display(); //Display the above code
  delay(1000);
}
