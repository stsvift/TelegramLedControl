#define WIFI_SSID "Имя сети"
#define WIFI_PASS "Пароль сети"
#define BOT_TOKEN "Токен бота из BotFather"
#define LED 2
int32_t menuID = 0;
byte depth = 0;

#include <FastBot.h>
FastBot bot(BOT_TOKEN);

void setup() {
  pinMode(LED, OUTPUT);
  connectWiFi();
  bot.attach(newMsg);
}

// обработчик сообщений
void newMsg(FB_msg& msg) {
  if (msg.text == "/say_hello") bot.sendMessage("Hello!", msg.chatID);
    else if (msg.text == "/led_on"){
    digitalWrite(LED, HIGH);
    bot.sendMessage("Светодиод включен!", msg.chatID);
    }
    else if (msg.text == "/led_off"){
    digitalWrite(LED, LOW);
    bot.sendMessage("Светодиод выключен!", msg.chatID);
    }
}


void loop() {
  bot.tick();
}

void connectWiFi() {
  delay(2000);
  Serial.begin(115200);
  Serial.println();

  WiFi.begin(WIFI_SSID, WIFI_PASS);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    if (millis() > 15000) ESP.restart();
  }
  Serial.println("Connected");
}