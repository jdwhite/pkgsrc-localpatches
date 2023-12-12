--- pathfn.cpp.orig	2023-11-08 11:14:14
+++ pathfn.cpp	2023-11-19 17:59:06
@@ -872,16 +872,16 @@
 
   char Field[10][11];
 
-  sprintf(Field[0],"%04u",rlt.Year);
-  sprintf(Field[1],"%02u",rlt.Month);
-  sprintf(Field[2],"%02u",rlt.Day);
-  sprintf(Field[3],"%02u",rlt.Hour);
-  sprintf(Field[4],"%02u",rlt.Minute);
-  sprintf(Field[5],"%02u",rlt.Second);
-  sprintf(Field[6],"%02u",(uint)CurWeek);
-  sprintf(Field[7],"%u",(uint)WeekDay+1);
-  sprintf(Field[8],"%03u",rlt.yDay+1);
-  sprintf(Field[9],"%05u",ArcNumber);
+  snprintf(Field[0],5,"%04u",rlt.Year);
+  snprintf(Field[1],3,"%02u",rlt.Month);
+  snprintf(Field[2],3,"%02u",rlt.Day);
+  snprintf(Field[3],3,"%02u",rlt.Hour);
+  snprintf(Field[4],3,"%02u",rlt.Minute);
+  snprintf(Field[5],3,"%02u",rlt.Second);
+  snprintf(Field[6],3,"%02u",(uint)CurWeek);
+  snprintf(Field[7],2,"%u",(uint)WeekDay+1);
+  snprintf(Field[8],4,"%03u",rlt.yDay+1);
+  snprintf(Field[9],6,"%05u",ArcNumber);
 
   const wchar *MaskChars=L"YMDHISWAEN";
 
