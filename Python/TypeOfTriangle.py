a = int(input("Enter the 1st side of triangle: "))
b = int(input("Enter the 2nd side of triangle: "))
c = int(input("Enter the 3rd side of triangle: "))
if(a==b or b==c or a==c):
    print("The triangle is isosles.")
if(a==b and b==c):
    print("The triangle is equilateral.")