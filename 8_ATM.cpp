#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "\n\nWelcome to I bank!\n\n";
    cout << "Please insert your chip card\n\n";

    cout << " (1) Insert your card\n";
    cin >> choice;

    switch (choice) {
        case 1: {
            for (int j = 0; j < 2; j++) {
                cout << "Loading . . .\n\n";
            }

            cout << "We are processing your transaction.\n";
            for (int j = 0; j < 2; j++) {
                cout << "Loading . . .\n\n";
            }

            cout << "Please do not remove your chip card.\nLeave your card inserted during the entire transaction.\n\n";

            int language;
            cout << "Please choose the language of your choice\n";
            cout << "(1) English\n";
            cout << "(2) हिंदी\n";
            cout << "(3) मराठी\n\n";
            cin >> language;

            switch (language) {
                case 1: {
                    int eng_choice1;
                    cout << "Hello, Customer!\n";
                    cout << "(1) Withdraw Cash\n(2) Check your Balance\n(3) Deposit\n\n";
                    cin >> eng_choice1;

                    switch (eng_choice1) {
                        case 1: {
                            int c1_eng_1;
                            cout << "(1) Current Account\n(2) Savings Account\n(3) Credit card\n\n";
                            cin >> c1_eng_1;

                            switch (c1_eng_1) {
                                case 1: {
                                    int amount;
                                    int pin, otp = 1234;
                                    int a;

                                    start_withdraw: 
                                    cout << "Enter the amount you wish to withdraw: ";
                                    cin >> amount;

                                    cout << "Check OTP on your registered Mobile No.\n";
                                    cout << "If received, press 1 to continue: ";
                                    cin >> a;

                                    if (a != 1) {
                                        cout << "Resending OTP...\n";
                                        goto start_withdraw;
                                    }

                                    cout << "Please enter 4-digit OTP received over SMS: ";
                                    cin >> otp;

                                    if (otp != 1234) {
                                        cout << "Invalid OTP. Please try again.\n";
                                        goto start_withdraw;
                                    }

                                    cout << "Please wait while we process your request...\n";
                                    cout << "Please collect your Cash.\n";
                                    cout << "Count before leaving.\n";
                                    cout << "Thank you.\n";

                                    break;
                                }

                                case 2: {
                                    int amount;
                                    int pin;

                                    start_savings:
                                    cout << "Enter the amount you wish to withdraw: ";
                                    cin >> amount;

                                    if (amount > 5529) {
                                        cout << "Insufficient amount.\n";
                                        goto start_savings;
                                    }

                                    here_savings:
                                    cout << "Enter your ATM PIN: ";
                                    cin >> pin;

                                    if (pin != 2023) {
                                        cout << "Enter a Valid PIN.\n";
                                        goto here_savings;
                                    }

                                    cout << "Please wait while we process your request...\n";
                                    cout << "Please collect your Cash.\n";
                                    cout << "Count before leaving.\n";
                                    cout << "Thank you.\n";

                                    break;
                                }

                                default:
                                    cout << "Server not found.\n";
                                    break;
                            }
                            break;
                        }

                        case 2: {
                            // Check Balance
                            int pin;

                            cout << "Enter your ATM PIN: ";
                            cin >> pin;

                            if (pin == 2023) // Assuming PIN is 2023 for this example
                            {
                                cout << "Your balance is $1000.00\n"; // Example balance
                            } else {
                                cout << "Invalid PIN. Please try again.\n";
                            }

                            break;
                        }

                        case 3: {
                            // Deposit
                            float depositAmount;
                            cout << "Enter the amount you want to deposit: $";
                            cin >> depositAmount;

                            // Assuming deposit is successful
                            cout << "You have successfully deposited $" << depositAmount << ".\n";

                            break;
                        }

                        default:
                            cout << "Server not found.\n";
                            break;
                    }
                    break;
                }

                case 2: {
                    int hind_choice1;
                    cout << "Hello, Customer!\n";
                    cout << "(1) नकदी निकासी\n(2) Check your Balance\n(3) Deposit\n\n";
                    cin >> hind_choice1;

                    switch (hind_choice1) {
                        case 1: {
                            int c1_hind_1;
                            cout << "(1) चालू\n(2) बचत\n(3) ऋण\n\n";
                            cin >> c1_hind_1;

                            switch (c1_hind_1) {
                                case 1: {
                                    int amount;
                                    int pin, otp = 1234;
                                    int a;

                                    start_withdraw_hindi:
                                    cout << "कृपया राशि दर्ज करें: ";
                                    cin >> amount;

                                    cout << "अपने पंजीकृत मोबाइल नंबर पर OTP देखें।\n";
                                    cout << "यदि प्राप्त हुआ है, तो आगे बढ़ने के लिए 1 दबाएं: ";
                                    cin >> a;

                                    if (a != 1) {
                                        cout << "OTP पुनः भेज रहे हैं...\n";
                                        goto start_withdraw_hindi;
                                    }

                                    cout << "कृपया SMS पर प्राप्त 4-अंकीय OTP दर्ज करें: ";
                                    cin >> otp;

                                    if (otp != 1234) {
                                        cout << "अमान्य OTP। कृपया पुनः प्रयास करें।\n";
                                        goto start_withdraw_hindi;
                                    }

                                    cout << "कृपया प्रतीक्षा करें, हम आपके अनुरोध का प्रसंस्करण करत आहोत...\n";
                                    cout << "कृपया अपने नकदी ले लें \n";
                                    cout << "जाने से पहले गिन लें।\n";
                                    cout << "धन्यवाद ! \n";

                                    break;
                                }

                                case 2: {
                                    int amount;
                                    int pin;

                                    start_savings_hindi:
                                    cout << "कृपया निकासी की राशि दर्ज करें: ";
                                    cin >> amount;

                                    if (amount > 5529) {
                                        cout << "राशि अपर्याप्त है।\n";
                                        goto start_savings_hindi;
                                    }

                                    here_savings_hindi:
                                    cout << "अपना एटीएम पिन दर्ज करें: ";
                                    cin >> pin;

                                    if (pin != 2023) {
                                        cout << "कृपया वैध पिन दर्ज करें।\n";
                                        goto here_savings_hindi;
                                    }

                                    cout << "कृपया प्रतीक्षा करें, हम आपके अनुरोध का प्रसंस्करण करत आहोत...\n";
                                    cout << "कृपया अपने नकदी ले लें \n";
                                    cout << "जाने से पहले गिन लें।\n";
                                    cout << "धन्यवाद ! \n";

                                    break;
                                }

                                default:
                                    cout << "सर्वर नहीं मिला।\n";
                                    break;
                            }
                            break;
                        }

                        case 2: {
                            // Check Balance in Hindi
                            int pin;

                            cout << "आपका एटीएम पिन दर्ज करें: ";
                            cin >> pin;

                            if (pin == 2023) // Assuming PIN is 2023 for this example
                            {
                                cout << "आपका शेष $1000.00 है।\n"; // Example balance
                            } else {
                                cout << "अमान्य पिन। कृपया पुनः प्रयास करें।\n";
                            }

                            break;
                        }

                        case 3: {
                            // Deposit in Hindi
                            float depositAmount;
                            cout << "आपकी जमा करने की राशि दर्ज करें: $";
                            cin >> depositAmount;

                            // Assuming deposit is successful
                            cout << "आपने सफलतापूर्वक $" << depositAmount << " जमा किया है।\n";

                            break;
                        }

                        default:
                            cout << "अमान्य विकल्प।\n";
                            break;
                    }
                    break;
                }

                case 3: {
                    int mar_choice1;
                    cout << "Hello, Customer!\n";
                    cout << "(1) कॅश व्यत्यास\n(2) Check your Balance\n(3) Deposit\n\n";
                    cin >> mar_choice1;

                    switch (mar_choice1) {
                        case 1: {
                            int c1_mar_1;
                            cout << "(1) चालू\n(2) बचत\n(3) कर्ज\n\n";
                            cin >> c1_mar_1;

                            switch (c1_mar_1) {
                                case 1: {
                                    int amount;
                                    int pin, otp = 1234;
                                    int a;

                                    start_withdraw_marathi:
                                    cout << "कृपया रक्कम नोंदवा:  ";
                                    cin >> amount;

                                    cout << "आपल्या नोंदणीकृत मोबाइल नंबरवरून OTP पहा.\n";
                                    cout << "जर प्राप्त झालं असलं तर आगल्या कदानासाठी १ दाबा: ";
                                    cin >> a;

                                    if (a != 1) {
                                        cout << "OTP पुनः पाठवत आहोत...\n";
                                        goto start_withdraw_marathi;
                                    }

                                    cout << "कृपया SMS द्वारे प्राप्त केलेला ४-अंकीय OTP प्रविष्ट करा: ";
                                    cin >> otp;

                                    if (otp != 1234) {
                                        cout << "अवैध OTP। कृपया पुनः प्रयास करा.\n";
                                        goto start_withdraw_marathi;
                                    }

                                    cout << "कृपया थांबा, आम्ही तुमचा विनंती प्रसंस्करण करीत आहोत...\n";
                                    cout << "कृपया आपले कॅश घ्या.\n";
                                    cout << "जाण्यापूर्वी गिणा.\n";
                                    cout << "धन्यवाद ! \n";

                                    break;
                                }

                                case 2: {
                                    int amount;
                                    int pin;

                                    start_savings_marathi:
                                    cout << "कृपया रक्कम नोंदवा: ";
                                    cin >> amount;

                                    if (amount > 5529) {
                                        cout << "रक्कम अपर्याप्त आहे.\n";
                                        goto start_savings_marathi;
                                    }

                                    here_savings_marathi:
                                    cout << "आपला एटीएम पिन प्रविष्ट करा: ";
                                    cin >> pin;

                                    if (pin != 2023) {
                                        cout << "कृपया वैध पिन प्रविष्ट करा.\n";
                                        goto here_savings_marathi;
                                    }

                                    cout << "कृपया थांबा, आम्ही तुमचा विनंती प्रसंस्करण करीत आहोत...\n";
                                    cout << "कृपया आपले कॅश घ्या.\n";
                                    cout << "जाण्यापूर्वी गिणा.\n";
                                    cout << "धन्यवाद ! \n";

                                    break;
                                }

                                default:
                                    cout << "सर्वर सापडलं नाही.\n";
                                    break;
                            }
                            break;
                        }

                        case 2: {
                            // Check Balance in Marathi
                            int pin;

                            cout << "आपला एटीएम पिन प्रविष्ट करा: ";
                            cin >> pin;

                            if (pin == 2023) // Assuming PIN is 2023 for this example
                            {
                                cout << "आपल्याच शिल्लक आहे $1000.00.\n"; // Example balance
                            } else {
                                cout << "अवैध पिन. कृपया पुनः प्रयास करा.\n";
                            }

                            break;
                        }

                        case 3: {
                            // Deposit in Marathi
                            float depositAmount;
                            cout << "जमा करण्याची रक्कम प्रविष्ट करा: $";
                            cin >> depositAmount;

                            // Assuming deposit is successful
                            cout << "आपल्याना सफलतेचा विश्वास आहे $" << depositAmount << ".\n";

                            break;
                        }

                        default:
                            cout << "सर्वर सापडलं नाही.\n";
                            break;
                    }
                    break;
                }

                default:
                    cout << "Server not found.\n";
                    break;
            }

            return 0;
        }

        default:
            cout << "Invalid Choice\n";
            break;
    }

    return 0;
}
