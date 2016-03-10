import json
from math import radians, cos, sin, asin, sqrt

def distance(y, x, y1, x1):
    y, x, y1, x1 = map(radians, [y, x, y1, x1])
    dy = y1 - y 
    dx = x1 - x 
    a = sin(dx/2)**2 + cos(x) * cos(x1) * sin(dy/2)**2
    dc = 2 * asin(sqrt(a)) 
    dkm = 6371 * dc
    return dkm

x = 12.9611159
y = 77.6362214

with open('data.json') as f:
    print "Name   Distance" 
    for line in f:
        jdata = json.loads(line)
        x1 = float(jdata['latitude'])
        y1 = float(jdata['longitude'])
        if(distance(x, y, x1, y1) <= 100):
            print jdata['name'], " ", jdata['user_id']
        
