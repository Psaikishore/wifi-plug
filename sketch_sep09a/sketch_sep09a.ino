#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include "Index.h"
int ledpin=2;//GPI02
int i=0,state=0;
const char* ssid="virus";
const char* password="virusvik";
ESP8266WebServer server(80);
void setup() {
  pinMode(ledpin,OUTPUT);
  Serial.begin(115200);
  delay(10);
  Serial.print("STATION MODE");
  /*if(ssid==NULL)
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
  }*/
  Serial.printf("Connected to %s\n",ssid);
  server.begin();
  Serial.printf("Web Server Started,open %s in a browser\n",WiFi.localIP().toString().c_str());
  server.on("/",handleroot);
}
void handleroot()
{
  String s=MAIN_page;
  server.send(200,"text/html",s);
}
void loop() {
  server.handleClient();
 /* WiFiClient client=server.available();//waiting for client to connect
  if(client)
  {
    Serial.println("client connected");
    while(client.connected())
    {
      if(client.available())
      {
             
      }     
    }
  }*/
}
void AP_Mode(){
  Serial.println("AP-MODE");
  WiFi.mode(WIFI_AP);
  Serial.print("Soft-AP adress is");
  Serial.println(WiFi.softAPIP());
  //CLIENT SERVER STARTED
  //ENTER SSID AND PASSWORD VIA WEB PAGE
}
  
  


