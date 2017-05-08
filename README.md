# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

# PID parameters

In this implementation, we use the following parameters:

```
Kp = 0.1
Ki = 0.001
Kd = 1.5
```

These parameters are chosen from a manual tuning.

The result is shown in [this video](https://www.youtube.com/watch?v=ML9MrCZeTR8).

# Effect of P, I, D

In order to test the effect of the P, I and D components, we introduced a 0.2 bias on the driving angle.

1. With P component only, the car oscillates heavily in the road, as shown in [this video](https://youtu.be/POsvaUiajPU).
2. With PD components, the car can drive on the road, but has a constant offset from the middle of the road, as shown in [this video](https://youtu.be/IRSYmvlXpn0).
3. With both the PID components, the car now drives much smoothly in the middle of the road, as shown in [this video](https://youtu.be/VBGvh2pmm9w). 

