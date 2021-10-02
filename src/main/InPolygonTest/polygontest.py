import numpy as np 
import shapely
from shapely.geometry import Polygon,MultiPoint  #Polygon
import cv2

image = cv2.imread('/Users/prince/Work/Developer/DS_Algo/src/main/InPolygonTest/input/998d98e.jpg')
image = cv2.resize(image, (640,480))
int_coords = lambda x: np.array(x).round().astype(np.int32)


line1=[100,100,100,200,200,200,200,100] #One-dimensional array representation of the coordinates of the four points of the quadrilateral, [x,y,x,y....]
a = np.array(line1).reshape(-1, 2) # quadrilateral two-dimensional coordinate representation
poly1 = Polygon(a).convex_hull # python quadrilateral object, will automatically calculate four points, the last four points in the order of: top left bottom right bottom right top left top
print(Polygon(a).convex_hull) # you can print to see if this is the case

 
line2=[0,0,0,480,640,480]
b=np.array(line2).reshape(-1,2)
poly2 = Polygon(b).convex_hull
print(Polygon(b).convex_hull)

intersect_polygon = None
if not poly1.intersects(poly2): #If the two quadrilaterals do not intersect
    iou = 0
else:
    try:
        intersect = poly1.intersection(poly2) #intersection area
        intersect_polygon = [int_coords(intersect.exterior.coords)]
        inter_area = poly1.intersection(poly2).area #intersection area
        iou=float(inter_area)/poly1.area
    except shapely.geos.TopologicalError:
        print('shapely.geos.TopologicalError occured, iou set to 0')
        iou = 0
 
print(iou)

isClosed = True  
image = cv2.polylines(image, [a], 
                      isClosed, (255, 0, 0), 3)
image = cv2.polylines(image, [b], 
                      isClosed, (0, 255, 0), 3)
image = cv2.polylines(image, intersect_polygon, 
                      isClosed, (255, 0, 255), 1)


cv2.imwrite('/Users/prince/Work/Developer/DS_Algo/src/main/InPolygonTest/output/998d98e.jpg', image)