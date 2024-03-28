Внутри репозитория содержится файл для загрузки на плату ESP8266.

Для правильной работы надо заменить данные трех первых переменных соответственно.
1. WIFI_SSID - Имя вашей сети
2. WIFI_PASS - Пароль вашей сети
3. BOT_TOKEN - Токен бота созданного через @BotFather в телеграм
Далее: загружаете программу на плату, после чего отерываете мессенджер и используете вашего бота для управления.

Светодиод закреплен за PIN 2 (GPIO2). Он был указан для платы ESP-01
![image](https://github.com/stsvift/TelegramLedControl/assets/102189717/bac8660f-d76c-46d3-b3f9-d4a9ba1cd232)

!!! Для работы программы требуется библиотека FastBot (https://github.com/GyverLibs/FastBot)
