String voice;

void setup() 
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  while(Serial.available())
  {
     delay(3);
     char c = Serial.read();
     voice += c; 
  } 
  if (voice.length() > 0)
  {
    Serial.println(voice);
    //şofben
    if(voice == "şofbeni aç" || voice == "Turn on the Water heater" || voice == "on1")
    {
      digitalWrite(3,HIGH);
    }
    
    else if(voice == "şofbeni kapat" || voice == "turn off the Water heater" || voice == "off1")
    {
      digitalWrite(3,LOW);
    }
    
    //doğalgaz
    else if(voice == "doğalgazı aç" || voice == "Turn on Natural Gas" || voice == "on2")
    {
      digitalWrite(4,HIGH);
    }
    
    else if(voice == "doğalgazı kapat" || voice == "Turn off Natural Gas" || voice == "off2")
    {
      digitalWrite(4,LOW);
    }

    //Mutfak
    else if(voice == "mutfağın ışığını aç" || voice == "Turn on the light" || voice == "on3")
    {
      digitalWrite(5,HIGH);
    }
    
    else if(voice == "mutfağın ışığını kapat" || voice == "turn off the light" || voice == "off3")
    {
      digitalWrite(5,LOW);
    }

    //Banyo
    else if(voice == "banyonun ışığını aç" || voice == "Turn on the light of the bathroom" || voice == "on4")
    {
      digitalWrite(6,HIGH);
    }
    
    else if(voice == "banyonun ışığını kapat" || voice == "turn off the light of the bathroom" || voice == "off4")
    {
      digitalWrite(6,LOW);
    }

    //Tuvalet
    else if(voice == "tuvaletin ışığını aç" || voice == "Turn on the light of the toilet" || voice == "on5")
    {
      digitalWrite(7,HIGH);
    }
    
    else if(voice == "tuvaletin ışığını kapat" || voice == "turn off the light of the toilet" || voice == "off5")
    {
      digitalWrite(7,LOW);
    }
    
    //Kapı
    else if(voice == "Kapıyı aç" || voice == "Open the door" || voice == "on6")
    {
      digitalWrite(10,HIGH);
    }
    
    else if(voice == "Kapıyı kapat" || voice == "Close The Door" || voice == "off6")
    {
      digitalWrite(10,LOW);
    }

    //Klima
    else if(voice == "Klimayı aç" || voice == "Turn on Air conditioner" || voice == "on7")
    {
      digitalWrite(11,HIGH);
    }
    
    else if(voice == "Klimayı kapat" || voice == "Turn off Air conditioner" || voice == "off7")
    {
      digitalWrite(11,LOW);
    }

    //Yatak Odası
    else if(voice == "yatak odasının ışığını aç" || voice == "Turn on the Bedroom Light" || voice == "on8")
    {
      digitalWrite(12,HIGH);
    }
    
    else if(voice == "yatak odasının ışığını kapat" || voice == "Turn of the Bedroom Light" || voice == "off8")
    {
      digitalWrite(12,LOW);
    }

    //Oturma Odası
    else if(voice == "Oturma odasının ışığını aç" || voice == "Turn on the light of the living room" || voice == "on9")
    {
      digitalWrite(13,HIGH);
    }
    
    else if(voice == "Oturma odasının ışığını kapat" || voice == "turn off the light of the living room" || voice == "off9")
    {
      digitalWrite(13,LOW);
    }
    else if(voice == "Hepsini aç" || voice == "Open All" || voice == "on10")
    {
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
    }

    else if(voice == "Hepsini kapat" || voice == "Close All" || voice == "off10")
    {
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
    }
    voice = "";
}
}
