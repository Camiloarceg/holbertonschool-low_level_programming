#include "lists.h"
/**
 * rotate_listint - rotate the linked list counter-clockwise by k nodes.
 * @head: pointer that points to the head pointer.
 * @k:position of the new_tail.
 *
 * Return: 0 if success.
 */
int rotate_listint(listint_t **head, int k)
{
  listint_t *new_tail = *head;
  listint_t *old_tail = *head;
  int n;

  for (n = 1; old_tail->next != NULL; n++)
  {
    if (n < k)
      new_tail = new_tail->next;
    old_tail = old_tail->next;
  }
  old_tail->next = *head;
  *head = new_tail->next;
  new_tail->next = NULL;
  return(0);
}
