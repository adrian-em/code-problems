def factorial_recursive(num):
    """returns the factorial of num using a recursive method."""
    return 1 if num == 0 else num * factorial_recursive(num -  1)

print factorial_recursive(0)
print factorial_recursive(1)
print factorial_recursive(5)