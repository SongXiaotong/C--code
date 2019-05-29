import re
def isNumber(s):
    s = s.replace(' ', '')
    key = r"^-?(([1-9](\d)*)|0)+(.\d*[1-9])?(e-?[1-9]\d*)?$"
    res = re.sub(key, "", s, 1, 0)
    if len(res) == 0:
        return True
    return False
        
        

if isNumber("1 "):
    print("success!")
else:
    print("fail!!")