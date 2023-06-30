entrada1 = int(input())

for x in range(entrada1):
    n = int(input())
    board = [1 for x in range(n)]

    set_board = set(board)
    for y in set_board:
        cou_e = board.count(y)

