# 6, 12, 18, 24

# 1, 2-7, 8-19, 20-37
num = int(input())
boundary = 1
room = 1

while True :
	if num <= boundary :
		print(room)
		exit()

	boundary += room*6
	room += 1