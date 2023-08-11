n, ch = input().split()

# Print the first line with n characters
print((ch + ' ') * n)

# Print the remaining lines
for i in range(1, (n // 2) + 1):
    # Print the left half of the line
    print('-' * i + ch, end='')

    # Print the numbers in descending order
    for j in range(n // 2, i - 1, -1):
        print(j, end='')

    # Print the right half of the line
    for j in range(i + 1, n // 2 + 1):
        print(ch, end='')

    print()

# Print the last line
print('-' * (n // 2) + ch if n > 1 else ch)
