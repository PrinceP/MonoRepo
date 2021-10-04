import numpy as np 
import shapely
from shapely.geometry import Polygon,MultiPoint  #Polygon
import cv2
import time

image = cv2.imread('/Users/prince/Work/Developer/DS_Algo/src/main/InPolygonTest/input/998d98e.jpg')
image = cv2.resize(image, (640,480))
int_coords = lambda x: np.array(x).round().astype(np.int32)


line1=[100,200, 100,300, 300,300, 200,200]
# line1=[100,250, 100,250, 200,300, 200,300]


a = np.array(line1).reshape(-1, 2)
poly1 = Polygon(a).convex_hull 
print(Polygon(a).convex_hull)

 
line2=[0,0,0,480,640,480]
b=np.array(line2).reshape(-1,2)
poly2 = Polygon(b).convex_hull
print(Polygon(b).convex_hull)

# union_poly = np.concatenate((a,b))   #Merge two box coordinates to become 8*2
# #print(union_poly)
# print(MultiPoint(union_poly).convex_hull)

intersect_polygon = None
start_time = time.time()
if not poly1.intersects(poly2): 
    print(time.time() - start_time)
    iou = 0
else:
    print(time.time() - start_time)
    try:
        start_time = time.time()
        intersect = poly1.intersection(poly2) #intersection area
        print(time.time() - start_time)
        intersect_polygon = [int_coords(intersect.exterior.coords)]
        inter_area = intersect.area #intersection area
        print("Intersect Area = {} ".format(inter_area))
        iou=float(inter_area)/poly1.area
    except shapely.geos.TopologicalError:
        print('shapely.geos.TopologicalError occured, iou set to 0')
        iou = 0
 
print("Area = {} ".format(iou))

isClosed = True  
image = cv2.polylines(image, [a], 
                      isClosed, (255, 0, 0), 3)
image = cv2.polylines(image, [b], 
                      isClosed, (0, 255, 0), 3)
image = cv2.polylines(image, intersect_polygon, 
                      isClosed, (255, 0, 255), 1)


cv2.imwrite('/Users/prince/Work/Developer/DS_Algo/src/main/InPolygonTest/output/998d98e_1.jpg', image)