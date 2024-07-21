// ############################################################################
//
//  Assignment:  1 
//  Milestone:   2
//  Description: Main Application Entry Point
//
// +---------------------------------------------------------+
// | *** The contents of this file is NOT to be modified *** |    
// +---------------------------------------------------------+
//
// ############################################################################


#include <stdio.h>

// include the user library "clinic" where the data types are declared
#include "clinic.h"

#define MAX_PETS 7

int main(void)
{
    struct Patient pets[MAX_PETS] = { 
        {1024, "Shaggy Yanson", {"CELL","3048005191"} },
        {1032, "Puglsey Yanson", {"CELL","3048005191"} },
        {1040, "Beans Maulin", {"HOME","3649155831"} },
        {1048, "Banjo Codi", {"TBA",{'\0'}} },
        {1056, "Rover Davidov", {"WORK","7934346809"} }
    };
    struct ClinicData data = { pets, MAX_PETS};

    // Entry point to the application logic:
    menuMain(&data);

    return 0;
}


/*  INPUTS:

2
1
1

2
1

2
3048005191

2
7934346809

1
9

2
1234567890

0
3
Horsey Henry
4

3
Turkey Time
2
9994133132

3

4
1048
1
Guitar Codi
2
3
7774115123
0
1

5
1111

5
1040
n

5
1056
y

1

0
0
y

*/

/* SAMPLE OUTPUT

Veterinary Clinic System
=========================
1) PATIENT     Management
2) APPOINTMENT Management
-------------------------
0) Exit System
-------------------------
Selection: 2

<<< Feature not yet available >>>

Veterinary Clinic System
=========================
1) PATIENT     Management
2) APPOINTMENT Management
-------------------------
0) Exit System
-------------------------
Selection: 1

Patient Management
=========================
1) VIEW   Patient Data
2) SEARCH Patients
3) ADD    Patient
4) EDIT   Patient
5) REMOVE Patient
-------------------------
0) Previous menu
-------------------------
Selection: 1

Pat.# Name            Phone#
----- --------------- --------------------
01024 Shaggy Yanson   (304)800-5191 (CELL)
01032 Puglsey Yanson  (304)800-5191 (CELL)
01040 Beans Maulin    (364)915-5831 (HOME)
01048 Banjo Codi      (___)___-____ (TBA)
01056 Rover Davidov   (793)434-6809 (WORK)

<ENTER> to continue...

Patient Management
=========================
1) VIEW   Patient Data
2) SEARCH Patients
3) ADD    Patient
4) EDIT   Patient
5) REMOVE Patient
-------------------------
0) Previous menu
-------------------------
Selection: 2

Search Options
==========================
1) By patient number
2) By phone number
..........................
0) Previous menu
..........................
Selection: 1

Search by patient number: 1040

Name  : Beans Maulin
Number: 01040
Phone : (364)915-5831 (HOME)

<ENTER> to continue...

Search Options
==========================
1) By patient number
2) By phone number
..........................
0) Previous menu
..........................
Selection: 2

Search by phone number: 3048005191

Pat.# Name            Phone#
----- --------------- --------------------
01024 Shaggy Yanson   (304)800-5191 (CELL)
01032 Puglsey Yanson  (304)800-5191 (CELL)

<ENTER> to continue...

Search Options
==========================
1) By patient number
2) By phone number
..........................
0) Previous menu
..........................
Selection: 2

Search by phone number: 7934346809

Pat.# Name            Phone#
----- --------------- --------------------
01056 Rover Davidov   (793)434-6809 (WORK)

<ENTER> to continue...

Search Options
==========================
1) By patient number
2) By phone number
..........................
0) Previous menu
..........................
Selection: 1

Search by patient number: 9

*** No records found ***

<ENTER> to continue...

Search Options
==========================
1) By patient number
2) By phone number
..........................
0) Previous menu
..........................
Selection: 2

Search by phone number: 1234567890

Pat.# Name            Phone#
----- --------------- --------------------

*** No records found ***

<ENTER> to continue...

Search Options
==========================
1) By patient number
2) By phone number
..........................
0) Previous menu
..........................
Selection: 0

Patient Management
=========================
1) VIEW   Patient Data
2) SEARCH Patients
3) ADD    Patient
4) EDIT   Patient
5) REMOVE Patient
-------------------------
0) Previous menu
-------------------------
Selection: 3

Patient Data Input
------------------
Number: 01057
Name  : Horse Henry

Phone Information
-----------------
How will the patient like to be contacted?
1. Cell
2. Home
3. Work
4. TBD
Selection: 4

*** New patient record added ***

<ENTER> to continue...

Patient Management
=========================
1) VIEW   Patient Data
2) SEARCH Patients
3) ADD    Patient
4) EDIT   Patient
5) REMOVE Patient
-------------------------
0) Previous menu
-------------------------
Selection: 3

Patient Data Input
------------------
Number: 01058
Name  : Turkey Time

Phone Information
-----------------
How will the patient like to be contacted?
1. Cell
2. Home
3. Work
4. TBD
Selection: 2

Contact: HOME
Number : 9994133132

*** New patient record added ***

<ENTER> to continue...

Patient Management
=========================
1) VIEW   Patient Data
2) SEARCH Patients
3) ADD    Patient
4) EDIT   Patient
5) REMOVE Patient
-------------------------
0) Previous menu
-------------------------
Selection: 3

ERROR: Patient listing is FULL!

<ENTER> to continue...

Patient Management
=========================
1) VIEW   Patient Data
2) SEARCH Patients
3) ADD    Patient
4) EDIT   Patient
5) REMOVE Patient
-------------------------
0) Previous menu
-------------------------
Selection: 4

Enter the patient number: 1048

Edit Patient (01048)
=========================
1) NAME : Banjo Codi
2) PHONE: (___)___-____
-------------------------
0) Previous menu
-------------------------
Selection: 1

Name  : Guitar Codi

Patient record updated!

Edit Patient (01048)
=========================
1) NAME : Guitar Codi
2) PHONE: (___)___-____
-------------------------
0) Previous menu
-------------------------
Selection: 2

Phone Information
-----------------
How will the patient like to be contacted?
1. Cell
2. Home
3. Work
4. TBD
Selection: 3

Contact: WORK
Number : 7774115123

Patient record updated!

Edit Patient (01048)
=========================
1) NAME : Guitar Codi
2) PHONE: (777)411-5123
-------------------------
0) Previous menu
-------------------------
Selection: 0

Patient Management
=========================
1) VIEW   Patient Data
2) SEARCH Patients
3) ADD    Patient
4) EDIT   Patient
5) REMOVE Patient
-------------------------
0) Previous menu
-------------------------
Selection: 1

Pat.# Name            Phone#
----- --------------- --------------------
01024 Shaggy Yanson   (304)800-5191 (CELL)
01032 Puglsey Yanson  (304)800-5191 (CELL)
01040 Beans Maulin    (364)915-5831 (HOME)
01048 Guitar Codi     (777)411-5123 (WORK)
01056 Rover Davidov   (793)434-6809 (WORK)
01057 Horse Henry     (___)___-____ (TBD)
01058 Turkey Time     (999)413-3132 (HOME)

<ENTER> to continue...

Patient Management
=========================
1) VIEW   Patient Data
2) SEARCH Patients
3) ADD    Patient
4) EDIT   Patient
5) REMOVE Patient
-------------------------
0) Previous menu
-------------------------
Selection: 5

Enter the patient number: 1111

ERROR: Patient record not found!

<ENTER> to continue...

Patient Management
=========================
1) VIEW   Patient Data
2) SEARCH Patients
3) ADD    Patient
4) EDIT   Patient
5) REMOVE Patient
-------------------------
0) Previous menu
-------------------------
Selection: 5

Enter the patient number: 1040

Name  : Beans Maulin
Number: 01040
Phone : (364)915-5831 (HOME)

Are you sure you want to remove this patient record? (y/n): n
Operation aborted.

<ENTER> to continue...

Patient Management
=========================
1) VIEW   Patient Data
2) SEARCH Patients
3) ADD    Patient
4) EDIT   Patient
5) REMOVE Patient
-------------------------
0) Previous menu
-------------------------
Selection: 5

Enter the patient number: 1056

Name  : Rover Davidov
Number: 01056
Phone : (793)434-6809 (WORK)

Are you sure you want to remove this patient record? (y/n): y
Patient record has been removed!

<ENTER> to continue...

Patient Management
=========================
1) VIEW   Patient Data
2) SEARCH Patients
3) ADD    Patient
4) EDIT   Patient
5) REMOVE Patient
-------------------------
0) Previous menu
-------------------------
Selection: 1

Pat.# Name            Phone#
----- --------------- --------------------
01024 Shaggy Yanson   (304)800-5191 (CELL)
01032 Puglsey Yanson  (304)800-5191 (CELL)
01040 Beans Maulin    (364)915-5831 (HOME)
01048 Guitar Codi     (777)411-5123 (WORK)
01057 Horse Henry     (___)___-____ (TBD)
01058 Turkey Time     (999)413-3132 (HOME)

<ENTER> to continue...

Patient Management
=========================
1) VIEW   Patient Data
2) SEARCH Patients
3) ADD    Patient
4) EDIT   Patient
5) REMOVE Patient
-------------------------
0) Previous menu
-------------------------
Selection: 0

Veterinary Clinic System
=========================
1) PATIENT     Management
2) APPOINTMENT Management
-------------------------
0) Exit System
-------------------------
Selection: 0

Are you sure you want to exit? (y|n): y

Exiting system... Goodbye.

*/ 