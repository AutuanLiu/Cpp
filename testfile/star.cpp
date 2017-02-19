
#include <iostream>
using namespace std;
int main() {
	int i = 3;
	int j = 0;
		for (int a = 0; a < i; a++) {
			for (int b = 0; b < i - a; b++) {
				cout<<"   ";
			}
			for (int b = 0; b < a * 2 + 1; b++) {
				cout<<"*  ";
			}
			cout<<endl;
		}
		for (int a = i - 1; a >= 0; a--) {
			for (int b = i - a; b >= 0; b--) {
				cout<<"   ";
			}
			for (int b = 2 * a - 1; b > 0; b--) {
				cout<<"*  ";
			}
			cout<<endl;
		}
	return 0;
}

/*
public class ProjectTest_01 {
	public static void main(String[] args) {
		int i = 3;
		int j = 0;
		for (int a = 0; a < i; a++) {
			for (int b = 0; b < i - a; b++) {
				System.out.print("  ");
			}
			for (int b = 0; b < a * 2 + 1; b++) {
				System.out.print("* ");
			}
			System.out.println();
		}
		for (int a = i - 1; a >= 0; a--) {
			for (int b = i - a; b >= 0; b--) {
				System.out.print("  ");
			}
			for (int b = 2 * a - 1; b > 0; b--) {
				System.out.print("* ");
			}
			System.out.println();
		}
	}
}*/
