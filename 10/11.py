#检测数据中的空白

filename = '/users/wp/desktop/studentinformation.txt'
with open(filename, 'r') as f:
    lines = f.readlines()

erro_ = 0
for index,i in enumerate(lines):
	print len(i.split())
	if len(i.split()) != 6:
		erro_ = index

print erro_
