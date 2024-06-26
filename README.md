# Fest Management System
#### Members:
```
1. Harshit Vishnoi (2023BCS025)
2. Ryan Madhuwala (2023BCS057)
3. Suyash Agrawal (2023BCS067)
4. Rachit Agrawal (2023BCS052)
5. Shubham Sharma (2023BCS062)
6. Abhinav Vats (2023BCS002)
7. Ajay Singh (2023BCS004)
8. Prince Kumar (2023BCS050)
9. Rohit (2023BCS056)
10. Shrey Gupta (2023BMS028)
```

---

## STAGE 1
##### Database storing details of fests across India hosted by various colleges, including:

1. **Categories of Fests:** 
   ```
   This is used as a filter for searching category of fest.
   Cultural Fest
   Technical & Entrepreneurship Fest
   Sports Fest
   Academic Fest
   Other Fest
   ```
2. **Name of Fests:**
   ```
   Title/ Name of fest. (MAX 50 Characters)
   ```
3. **Organising Institute:**
   ```
   Name 
   & 
   Address (Name of college, road/ area, city, state, country, pincode)
   Also provides State wise filter for fest.
   ```
4. **Fest Description:**
   ```
   About Fest
   (MAX 500 Characters)
   ```
5. **Fest Date:**
   ```
   DD MM YYYY (MM in words)
   Currently Active Fest date
   Last Happened if fest is not acitve
   ```
6. **Host Information:**
   ```
   About Insitute organising the fest.
   ```
7. **Entry Fee:**
   ```
   Entry Fees in rupees.
   What all it include 
   or different offers (+)
   ```
8. **Fest Attendees:**
   ```
   When last held also graph for popularisation of fest each year.
   ```
9. **Fest Sponsors:**
   ```
   Category & name of sponsors
   ```
10. **Photos or Reels of the fest:**
    ```
    Google drive link.
    ```
11. **Social Platform Links:**
    ```
    Instagram
    Twitter
    Website
    ```

---

## STAGE 2

#### Database management for assigning team members from the hosting college to their respective teams within the fest:
1. **Categories of team:**
   ```
    Core Organizing Team
    Promotion and Marketing Team
    Event Coordination Team (Calling team/invitation team)
    Finance and Sponsorship Team
    Technical and Production Team
    Other Teams
   ```
2. **Data Collection:**
   ```
   Candidate Name
   Roll Number
   Email ID of Candidate (College ID)
   Position/ Post
   ```
3. **Attendance:**
   ```
   Number of Days they worked for fest. (Data Analysis)
   ```
---

## STAGE 3
#### Participant registration system for individuals outside the hosting college interested in specific events, allowing them to provide:
1. **Collecting Data:**
   ```
   Name of candidate
   Born in Year
   Email ID
   Phone Number
   Contact Info
   Interests or hobbies (e.g., dance, music, art, open mic)
   College/institution affiliation (if any)
   Previous participation in fests or events
   Achievements
   Additional information
   ```
2. **Fest Management:**
   ```
   Fest events dates and time management.
   With Latest updates about fest if any event will be held or is postponed.
   Winners or rank list of any event.
   ```
---

## Road Map

1. **College & Sponsor**:
   - These two classes are independent entities, each with its own set of attributes and behaviors.

2. **Student** (Inherited by College):
   - Student is a specialized type of college entity so inheriting student from college via single inheritance.

3. **Festival** (Multiple Inheritance of College & Sponsor):
   - Inheriting from both College and Sponsor implies that a festival is somehow related to both entities.

4. **Team** (Multiple Inheritance of Student & Festival):
   - Inheriting from both Student and Festival suggests that a team is somehow related to both entities.

5. **Participant** (Multiple Inheritance of Student & Festival):
   - Similar to the Team class, inheriting from both Student and Festival implies a relationship between these entities.

---

## Concepts Used

#### Basic:
```
Datatypes (string, bool, int)

Ternary Operator
```

#### OOPS:
```
Single Inheritance

Multiple Inheritance

Multilevel Inheritance
```

---
