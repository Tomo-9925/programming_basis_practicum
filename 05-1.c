#include <stdio.h>

 int main() {
	 float height, width, length, weight;

	 printf("封筒の長さ(cm):");
	 scanf("%f", &length);

	 printf("封筒の幅　(cm):");
	 scanf("%f", &width);

	 printf("封筒の厚さ(cm):");
	 scanf("%f", &height);

	 printf("封筒の重量(g) :");
	 scanf("%f", &weight);

	 if (length<=23.5&&width<=12&&height<=1&&weight<=50) {
		 if (weight<=25) {
			 printf("送料は80円です\n");
		 } else {
			 printf("送料は90円です\n");
		 }
	 } else if (weight<=4000) {
		 if (weight<=50) {
			 printf("送料は120円です\n");
		 } else if (weight<=100) {
			 printf("送料は140円です\n");
		 } else if (weight<=150) {
			 printf("送料は200円です\n");
		 } else if (weight<=250) {
			 printf("送料は240円です\n");
		 } else if (weight<=500) {
			 printf("送料は390円です\n");
		 } else if (weight<=1000) {
			 printf("送料は580円です\n");
		 } else if (weight<=2000) {
			 printf("送料は850円です\n");
		 } else if (weight<=4000) {
			 printf("送料は1,150円です\n");
		 } else {
			 printf("送料算出不可\n");
		 }
	 } else {
		 printf("送料算出不可\n");
	 }

	 return 0;
}
