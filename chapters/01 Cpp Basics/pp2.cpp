#include <iostream>
using namespace std;

int main() {
    double sweetner_to_kill_mouse, mouse_weight, dieter_weight;

    cout << "Please input the ammount of sweetner to kill a mouse, the mouses weight and than the desired Dieters weight" << endl;
    cin >> sweetner_to_kill_mouse >> mouse_weight >> dieter_weight;

    const double PERCENTAGE = 0.0001;
    double sweetner_to_kill_dieter = (dieter_weight / mouse_weight) * sweetner_to_kill_mouse * PERCENTAGE;

    cout << "You can drink " << sweetner_to_kill_dieter << " kg of sweetner without dying" << endl;

    return 0;
}