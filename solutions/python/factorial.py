def factorial_recursive(num):
    """returns the factorial of num using a recursive method."""
    return num if num == 1 else num * factorial_recursive2(num -  1)