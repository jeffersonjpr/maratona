a = input().split()
b = input().split()
x,y= float(a[0]),float(a[1])
x1,y1=float(b[0]),float(b[1])

print("%.4f"%(((x - x1)**2 + (y-y1)**2)**0.5))
