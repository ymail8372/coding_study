x, y, w, h = map(int, input().split())

x_dist = abs(x - w)
y_dist = abs(y - h)

print(min(x_dist, y_dist, x, y))