def draw_snowflake(size):
    if size < 3 or size % 2 == 0:
        print("Size must be an odd number >= 3")
        return

    center = size // 2
    for i in range(size):
        row = ""
        for j in range(size):
            if i == center or j == center or i == j or i + j == size - 1:
                row += "*"
            else:
                row += " "
        print(row)

# to create a random snowflake generator in python

draw_snowflake(21)


