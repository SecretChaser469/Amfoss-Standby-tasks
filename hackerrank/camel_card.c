#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char hand[6];
    int bid;
    int rank;
} PokerHand;

int cardValue(char c) {
    if (c == 'A') return 14;
    if (c == 'K') return 13;
    if (c == 'Q') return 12;
    if (c == 'T') return 10;
    if (c == 'J') return 1; // Treat J as the weakest
    return c - '0';
}

int compareCards(const void* a, const void* b) {
    return cardValue(*(char*)b) - cardValue(*(char*)a);
}

int handRank(const char* hand) {
    int counts[15] = {0};
    int jokers = 0;

    for (int i = 0; i < 5; i++) {
        if (hand[i] == 'J') jokers++;
        else counts[cardValue(hand[i])]++;
    }

    int four = 0, three = 0, pairs = 0;
    for (int i = 2; i <= 14; i++) {
        if (counts[i] + jokers >= 4) four++;
        if (counts[i] + jokers >= 3) three++;
        if (counts[i] + jokers >= 2) pairs++;
    }

    if (four) return 2; // Four of a kind
    if (three && pairs) return 3; // Full house
    if (three) return 4; // Three of a kind
    if (pairs == 2) return 5; // Two pair
    if (pairs == 1) return 6; // One pair
    return 7; // High card
}

int compareHands(const void* a, const void* b) {
    PokerHand* handA = (PokerHand*)a;
    PokerHand* handB = (PokerHand*)b;

    if (handA->rank != handB->rank) {
        return handA->rank - handB->rank;
    }

    char sortedA[6], sortedB[6];
    strcpy(sortedA, handA->hand);
    strcpy(sortedB, handB->hand);

    qsort(sortedA, 5, sizeof(char), compareCards);
    qsort(sortedB, 5, sizeof(char), compareCards);

    for (int i = 0; i < 5; i++) {
        int cmp = cardValue(sortedB[i]) - cardValue(sortedA[i]);
        if (cmp != 0) return cmp;
    }

    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    PokerHand hands[n];
    for (int i = 0; i < n; i++) {
        scanf("%s,%d", hands[i].hand, &hands[i].bid);
        hands[i].rank = handRank(hands[i].hand);
    }

    qsort(hands, n, sizeof(PokerHand), compareHands);

    int totalWinnings = 0;
    for (int i = 0; i < n; i++) {
        totalWinnings += (i + 1) * hands[i].bid;
    }

    printf("%d\n", totalWinnings);
    return 0;
}
