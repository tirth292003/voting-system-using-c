#include <stdio.h>

int main() {
    int votesBJP = 0, votesCongress = 0, votesAAP = 0;
    int choice, vote;

    while (1) {
        printf("\n--- Voting System ---\n");
        printf("1. Cast Vote\n");
        printf("2. View Results\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Cast Your Vote ---\n");
                printf("1. BJP\n");
                printf("2. Congress\n");
                printf("3. AAP\n");
                printf("Enter your vote (1-3): ");
                scanf("%d", &vote);

                if (vote == 1) {
                    votesBJP++;
                    printf("You voted for BJP.\n");
                } else if (vote == 2) {
                    votesCongress++;
                    printf("You voted for Congress.\n");
                } else if (vote == 3) {
                    votesAAP++;
                    printf("You voted for AAP.\n");
                } else {
                    printf("Invalid vote! Please try again.\n");
                }
                break;

            case 2:
                printf("\n--- Voting Results ---\n");
                printf("BJP: %d votes\n", votesBJP);
                printf("Congress: %d votes\n", votesCongress);
                printf("AAP: %d votes\n", votesAAP);

                if (votesBJP > votesCongress && votesBJP > votesAAP) {
                    printf("BJP is the winner!\n");
                } else if (votesCongress > votesBJP && votesCongress > votesAAP) {
                    printf("Congress is the winner!\n");
                } else if (votesAAP > votesBJP && votesAAP > votesCongress) {
                    printf("AAP is the winner!\n");
                } else {
                    printf("It's a tie!\n");
                }
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
