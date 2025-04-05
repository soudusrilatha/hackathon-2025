#include <stdio.h>
#include <string.h>

int initializeUserProfile(char name[]) {
    printf("Enter child's name: ");
    scanf("%s", name);
    printf("Profile created for %s\n\n", name);
    return 1;
}

int loadVREnvironment() {
    printf("Loading virtual classroom environment...\n");
    return 1;
}

void presentSocialScenario() {
    printf("\nScenario: A friend drops their pencil in class.\n");
    printf("What would you do?\n");
    printf("1. Help them pick it up\n2. Ignore\n3. Laugh at them\n");
}

int captureUserResponse() {
    int choice;
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    return choice;
}

void analyzeEmotion(int choice) {
    switch(choice) {
        case 1:
            printf("Emotion recognized: Empathy\n");
            break;
        case 2:
            printf("Emotion recognized: Indifference\n");
            break;
        case 3:
            printf("Emotion recognized: Negative Behavior\n");
            break;
        default:
            printf("Unrecognized response.\n");
            break;
    }
}

void provideRealTimeFeedback(int choice) {
    if (choice == 1)
        printf("Great job! That was a kind thing to do.\n");
    else if (choice == 2)
        printf("Maybe try helping next time.\n");
    else if (choice == 3)
        printf("That might hurt someone’s feelings. Let's try to be kind.\n");
    else
        printf("Invalid input. Let’s try again.\n");
}

int reinforceLearnedSkills(int choice) {
    if (choice == 1)
        return 1;
    else
        return 0;
}

int updateMonitoringDashboard(char name[], int progressScore) {
    printf("\nUpdating dashboard for %s...\n", name);
    printf("Current Progress Score: %d/1\n", progressScore);
    return 1;
}

void displayFinalOutcome(int progressScore) {
    printf("\n--- Session Summary ---\n");
    if (progressScore == 1)
        printf("Great progress! Keep practicing your social skills.\n");
    else
        printf("Good try! Let’s keep learning and improving.\n");
}

int main() {
    char name[30];
    int scenarioCompleted = 0;
    int choice = 0;
    int progressScore = 0;

    initializeUserProfile(name);

    if (loadVREnvironment()) {
        presentSocialScenario();
        choice = captureUserResponse();
        analyzeEmotion(choice);
        provideRealTimeFeedback(choice);
        scenarioCompleted = 1;
    }

    if (scenarioCompleted) {
        progressScore = reinforceLearnedSkills(choice);
        updateMonitoringDashboard(name, progressScore);
    }

    displayFinalOutcome(progressScore);
    return 0;
}
