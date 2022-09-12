def check_paint_num (board) :
	black_start = 0
	white_start = 0
	for i in range(8) :
		for j in range(8) :
			if (i + j) % 2 == 0 :
				if board[i][j] == "W" :
					black_start += 1
				else :
					white_start += 1
			else :
				if board[i][j] == "W" :
					white_start += 1
				else :
					black_start += 1

	return min(black_start, white_start)

N, M = input().split()
N = int(N)
M = int(M)

origin_board = []
for i in range(N) :
	str = input()
	temp = list(str)
	origin_board.append(temp)

min_paint = 64
board = []
for i in range(0, N-7) :
	for j in range(0, M-7) :
		board = []
		for k in range(i, i+8) :
			board.append(origin_board[k][j:j+8])

		min_paint = min(min_paint, check_paint_num(board))

print(min_paint)