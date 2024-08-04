# DeskWaterServing


# backStory:
Lazy? Absolutely. Thirsty? Constantly. So, I decided to combine my love for procrastination with my need for hydration and build a robot to serve me water. The goal was simple: a device that could deliver a refreshing drink at the push of a button, no matter how close I was to the water cooler.
⚠️ *still in progress* 

#The Initial Concept

My first thought was a stepper motor. I had one lying around from an old CD/DVD drive, so it seemed like a perfect starting point. However, after some initial testing, I realized that it was simply too slow for my desired level of convenience. 
Here is the First Thing I came up with:

<img src="https://media.discordapp.net/attachments/1138774156759019652/1268256787614793728/image.png?ex=66b060ed&is=66af0f6d&hm=deaa62e90b8fc8134ffbc6ebaf80d46d11a7f2e15776530d8a7a623a8f3822bb&=&format=webp&quality=lossless&width=1406&height=547">

It looks pretty neat not gonna lie..!!

# Overcoming Challenges

Wiring up the stepper motor with an Arduino UNO was straightforward enough, but I soon encountered a major hurdle: overheating. The motor was drawing a hefty 0.8 amps from the 12V power supply, causing it to become dangerously hot. To address this, I built a voltage regulator using an LM3173. While this helped control the voltage, it introduced a new problem: the LM3173 itself was overheating! Clearly, this approach wasn't sustainable.

<img src="https://media.discordapp.net/attachments/1138774156759019652/1268567159366483968/IMG_5714.jpg?ex=66b0307b&is=66aedefb&hm=bd3b3b5279bfb124f379e59b499afb6b2ba95b25f73488bf31dd973ad1d3054e&=&format=webp&width=439&height=585">

# A New Direction

It was time for a rethink. The stepper motor's slow speed and high torque weren't necessary for this project, as I only needed to move a glass of water a short distance. I decided to repurpose the CD tray mechanism from the old drive. With some modifications, I managed to create a reliable and efficient way to transport the water.

<img src="https://media.discordapp.net/attachments/1138774156759019652/1268567160746152047/IMG_5713.jpg?ex=66b0307b&is=66aedefb&hm=657146bbb31306cba15fc30ff8779fc7f41ac96b421369e9d6386191891f4a06&=&format=webp&width=439&height=585">

# Making of the Voltage Regulator

To power the project, I needed a reliable voltage source. I decided to build a voltage regulator using the versatile LM3173 chip. This component offered the flexibility to both increase and decrease voltage, which was ideal for my needs.

# excessive heat generation:
However, I quickly encountered a significant Challange While the LM3173 handled the voltage regulation well, it produced an alarming amount of heat. The heat sink I attached was unable to dissipate the energy fast enough, and I even witnessed a drop of water evaporate instantly when placed on it. It became clear that the LM3173 was inefficient for this application.

Given that the stepper motor was ultimately replaced due to its slow speed and the relatively light weight of the water glass, the high torque requirement was no longer necessary. This meant I could explore more efficient voltage regulation solutions without the constraints of the original design.

<img src="https://media.discordapp.net/attachments/1138774156759019652/1269565974072524900/IMG_5727.png?ex=66b086f3&is=66af3573&hm=71cde3d0dc847020f8880b15e0fbe6258356ff867af9336c6bca25a57ed8b6eb&=&format=webp&quality=lossless&width=236&height=420">

# Switching to a Different Motor

Realizing the limitations of the stepper motor, I turned my attention to the CD tray mechanism. It was a surprising fit for the task, capable of securely holding a glass of water. With some modifications to optimize its performance, I successfully integrated the CD tray into the robot's design. The results are promising, and I'm eager to share a video demonstration of the robot in action soon.



https://github.com/user-attachments/assets/b298efc8-93ff-42b0-95c2-6840724548e0

