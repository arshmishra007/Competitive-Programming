time = input()
if 'PM' in time:
    num1 = time[0]
    num2 = time[1]
    num3 =int(num1+num2)
    if(num3==12):
        print('00'+time[2:-2])
    else:
        print(str(num3+12)+time[2:-2])
else:
    print(time[:-2])   
