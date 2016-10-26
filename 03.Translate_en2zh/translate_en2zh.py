#/usr/bin/env python
#coding=utf8
 
import sys
import httplib
import md5
import urllib
import random
import json

reload(sys)
sys.setdefaultencoding('utf-8')

def trans_line(line, fromLang, toLang):
    result = []

    # replace with your id and key
    appid = ''
    secretKey = ''

    httpClient = None
    myurl = '/api/trans/vip/translate'
    q = line
    salt = random.randint(32768, 65536)

    sign = appid+q+str(salt)+secretKey
    m1 = md5.new()
    m1.update(sign)
    sign = m1.hexdigest()
    myurl = myurl+'?appid='+appid+'&q='+urllib.quote(q)+'&from='+fromLang+'&to='+toLang+'&salt='+str(salt)+'&sign='+sign
     
    try:
        httpClient = httplib.HTTPConnection('api.fanyi.baidu.com')
        httpClient.request('GET', myurl)
     
        #response是HTTPResponse对象
        response = httpClient.getresponse()
        jsonData = json.loads(response.read())
        # print jsonData
        result.append(jsonData['trans_result'][0]['src'])
        result.append(jsonData['trans_result'][0]['dst'])
    except Exception, e:
        print e
    finally:
        if httpClient:
            httpClient.close()

    return result

if __name__ == "__main__":
    fromLang = 'en'
    toLang = 'zh'

    if len(sys.argv) != 2:
        print "Enter a file name: "
        exit()

    filename = sys.argv[1]
    tmp = filename.split(".")
    if len(tmp) != 2:
        print "Error filename"
        exit()
    out_name = tmp[0] + '_en2zh.' + tmp[1]

    translated_list = []
    with open(filename, 'r') as fh_in:
        for line in fh_in:
            line = line.strip()
            if not line: continue

            translated_list.append(trans_line(line, fromLang, toLang))

    with open(out_name, 'w') as fh_out:
        for line_result in translated_list:
            #fh_out.write(line_result[1].encode("GBK") + "\n")
            fh_out.write(line_result[1] + "\n")

