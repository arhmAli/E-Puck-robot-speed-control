from controller import Robot,DistanceSensor
Time_step=32
robot=Robot()
sensor=robot.getDevice("my_distance_sensor")
sensor.enable(Time_step)
while robot.step(Time_step)!=-1:
  value=sensor.getValue()
  print("sensor value:",value)