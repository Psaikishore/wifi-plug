#include<ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
int ledpin=2;//GPI02
int i=0,state=0;
char* ssid=NULL,password=NULL;
WiFiServer server(80);
void setup() {
  pinMode(ledpin,OUTPUT);
  Serial.begin(115200);
  delay(10);
  Serial.print("STATION MODE");
  if(ssid==NULL)
  {
    //ENTER NEW SSID AND PASSWORD
   state= AP_Mode();
   WiFi.mode(WIFI_STA);
  }
  flag=WiFi.begin(ssid,password);
  while(flag!=WL_CONNECTED)
  {
    Serial.print("wifi not connected");
    AP_Mode();
    //ENTER NEW SSID PASSWORD
     flag=WiFi.begin(ssid,password);
  }
  Serial.print("Connected to %s",ssid);
  Server.begin();
  Serial.printf("Web Server Started,open %s in a browser\n",WiFi.localIP().toString().c_str());
  
}
void loop() {
  WiFiClient client=server.available();//waiting for client to connect
  if(client)
  {
    Serial.println("client connected");
    while(client.connected())
    {
      
    }
  }
 }
 void switchon(bool turnon)
 {
    if(turnon)
    {
      digitalWrite(ledpin,HIGH);
    }
    else
    {
      digitalWrite(ledpin,LOW);
    }
 }  
}
void AP_Mode(){
  Serial.println("AP-MODE");
  WiFi.mode(WIFI_AP)
  Serial.print("Soft-AP adress is");
  Serial.println(WiFi.softAPIP())
  //CLIENT SERVER STARTED
  //ENTER SSID AND PASSWORD VIA WEB PAGE
}
  
  


