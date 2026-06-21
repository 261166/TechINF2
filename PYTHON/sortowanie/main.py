
numbers = [int(x) for x in input("Enter your numbers, separate them with a comma: ").split(',')]
print(numbers)

numbers.sort()
print("Here are your numbers in ascending order:\n", numbers)

numbers.sort(reverse=True)
print("\nHere are your numbers in descending order:\n", numbers)
