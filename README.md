# DeskWaterServing
A bot which Serves you Water across your desk with push of a button or even after time intervals so you dont forget to drink water

⚠️ *still in progress* 

# backStory:

So i was very lazy I am still 😂 But I wanted to make a simple bot which can Serve me water even if i am 1cm away from the water itself 
with some brainstorming i got this:
<img src="https://media.discordapp.net/attachments/1138774156759019652/1268256787614793728/image.png?ex=66b060ed&is=66af0f6d&hm=deaa62e90b8fc8134ffbc6ebaf80d46d11a7f2e15776530d8a7a623a8f3822bb&=&format=webp&quality=lossless&width=1406&height=547">

It looks pretty neat not gonna lie..!!

# Stepper Era:

So My inital Idea was using a Stepper motor which i got out from the CD/DVD rom it was pretty cool but it was way to slow i was using a L293d Driver to run the Stepper

<img src="https://media.discordapp.net/attachments/1138774156759019652/1268567159366483968/IMG_5714.jpg?ex=66b0307b&is=66aedefb&hm=bd3b3b5279bfb124f379e59b499afb6b2ba95b25f73488bf31dd973ad1d3054e&=&format=webp&width=439&height=585">

# Wiring of the Stepper + Heating Problem ♨️:

So i did wire it up and got it running but it wasnt fun 🥹  This Time i used a Arduino UNO, Also the Stepper was very very Hot, I was powering it with a `DC 12V supply` upon checking it was getting `0.8 Amps` 

<img src="https://media.discordapp.net/attachments/1138774156759019652/1268567160746152047/IMG_5713.jpg?ex=66b0307b&is=66aedefb&hm=657146bbb31306cba15fc30ff8779fc7f41ac96b421369e9d6386191891f4a06&=&format=webp&width=439&height=585">

# Making of Voltage Regulator:

So i made a Voltage Regulator for the supply then using our old friend `LM3173` and it could crank up my 12v to 40v and crank it way down too which was exactly what i needed 😄, But as always Problems are there its not fun without problem though are they? So the heating problem was here too but insted of the Stepper Heating this time it was wayyy worse, the LM was heating so bad that on the heatsink i tried to put a drop of water it evaporated in couple of ms, It was not looking good, I fount out then that this IC is very Inefficient so because stepper wasnt cut out + was very slow too (high torque but) since glass wasnt that heavy i didnt need the torque that much

<img src="https://media.discordapp.net/attachments/1138774156759019652/1269565974072524900/IMG_5727.png?ex=66b086f3&is=66af3573&hm=71cde3d0dc847020f8880b15e0fbe6258356ff867af9336c6bca25a57ed8b6eb&=&format=webp&quality=lossless&width=236&height=420">

# Using a Different Motor:

So then i came to the conclusion to use the CD tray part of the CD ROM and it was pretty Cool to even hold the Glass too, i did some adjustments to make it good and Efficient but up until now this is the Progress you can see it in action:
