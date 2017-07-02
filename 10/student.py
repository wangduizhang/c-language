#_*_coding:utf-8_*_

import sys


#读取文件内信息
def open_read(filename):
    with open(filename, 'r') as f:
        return f.read().split()



#生成信息列表
def make_list(information,index):
    list = []
    while  True:
        list.append(information[index])
        index += 6
        if index > 79595:
            return list


def get_studentid():
    return make_list(information, 0)
    

def get_name():
    return make_list(information, 1)
    

def get_xi():
    return make_list(information, 2)


def get_zhuanye():
    return make_list(information, 3)
    

def get_idcard():
    return make_list(information, 4)
    

def get_money():
    return make_list(information, 5)


def getbirthday():
    birthday = []
    id_card = get_idcard()
    for i in id_card:
        birthday.append(i[6:14])
    return birthday


#获取出生年份分布
def get_biryear():
    birthday  = getbirthday()
    biryear = {}
    for i in birthday:
        year = i[0:4]
        biryear[year] = biryear.get(year, 0) + 1
    return biryear

#全校年纪人数统计
def get_sy():
    year_dict = {}
    for i in get_studentid():
        year = i[0:4]
        year_dict[year] = year_dict.get(year, 0) + 1
    return year_dict

#地区查询字典
def get_address_dict():
    addressdic = {}
    i = 0
    while  True:
        addressdic[addressfile[i]] = addressfile[i+1]
        if i == 6928:
            return addressdic
        else:
            i += 2


def get_address(addressnumber):
    return addressdic[addressnumber]


def get_xingbie(idcard):
    if int(idcard[16]) %2 == 0:
        return '女'
    else:
        return '男'


def get_age(birthday):
    year = birthday[0:4]
    return 2018 - int(year)



    

#查找个人信息
def self_information(name):
    birthday = getbirthday()
    idcard = get_idcard()
    xi = get_xi()
    zhuanye = get_zhuanye()
    studentid = get_studentid()
 


    for index ,i in enumerate(get_name()):
        if i  == name:
            self_idcard = idcard[index]
            self_address = self_idcard[0:6]
            self_birthday = birthday[index]
            self_studentid = studentid[index]
            print "姓名:%s 年龄:%d 性别:%s" % (name ,get_age(birthday[index]),get_xingbie(self_idcard))
            print "生日：%s年%s月%s日" % (self_birthday[0:4],self_birthday[4:6],self_birthday[6:8])
            print "年级：%s届 系：%s 专业：%s " % (self_studentid[0:4],xi[index],zhuanye[index])
            print "家庭住址：%s" % addressdic[self_address]
            print "= = = = = = = = = = = = = = = = = = = = = = ="


if __name__ == '__main__':
    filename1 = '/users/wp/desktop/studentinformation.txt'
    filename2 = '/users/wp/desktop/address.txt'
    
    information = open_read(filename1)
    addressfile = open_read(filename2)
    addressdic = get_address_dict()



    print "1.全校学生出生年份统计 \n2.各年级人数统计\n3.查找个人信息"
    choice = raw_input(">>>")
    
    if choice == '1':
        sum = 0
        biryear = get_biryear()
        for i in sorted(biryear):
            print "%s年：%r人" % (i, biryear[i])
            sum += int(biryear[i])
        print'共%s人'% sum
    elif choice == '2':
        year_dict = get_sy()
        for i in sorted(year_dict):
            print "%s届：%r人" % (i, year_dict[i])
    elif choice == '3':
        print "= = = = = = = = = = = = = = = = = = = = = = ="
        name = raw_input("输入姓名：")
        print "= = = = = = = = = = = = = = = = = = = = = = ="
        self_information(name)














    

    



