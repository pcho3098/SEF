/*Filename: classifier.cpp
* Assignment: Assignment-5: Version Control
 *By: Patrick Cho
 *Date: April 19, 2021
 *Description: This file contains a Classifier class, containing an int and two simple functions.  This
 *			   is being used to practice with Git and Github.
*/



class Classifier {
	int data;
public:
	void setData(int dataInput) {
		data = dataInput;
	}
	int data() {
		return data;
	}

	void train() {
		printf("train\n");
	}

	void predict() {
		printf("predict\n");
	}
};