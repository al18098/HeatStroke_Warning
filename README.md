## 熱中症警告センサ
**デバイス構成**  
・Arduino  
・LCD1602 Module  
・DHT11 Temperature and Humidity Module  
・Buzzer  
![Device Configuration](https://user-images.githubusercontent.com/66660848/170662190-ddf10757-ad6d-423a-a293-ad1b4c638184.jpg)
  
  
**システム内容**  
温湿度センサから取得した温度と湿度から熱中症の危険度を大・中・小の3つに分ける。  
危険度に応じた音楽を流し、警告を行う。  
  
危険度　大：「温度30℃未満　AND　湿度70%未満」　→　「救急車サイレン」  
危険度　中：「温度30℃以上　AND　湿度70%未満」　OR　「温度30℃未満　&　湿度70%以上」　→　「さんぽ」  　
危険度　小：「温度30℃以上　AND　湿度70%以上」　→　「エーデルワイス」  
  
また、LCDモジュールに温度と湿度を表示する。  
　→　「Sample.mp4」参照  
  
  
**システム構成**  
入力：温度・湿度センサ値  
出力：音楽，温度・湿度  
  
  
![System (1)](https://user-images.githubusercontent.com/66660848/170661928-8398f573-ef97-4bac-9994-b16ba4dad3b1.jpg)
