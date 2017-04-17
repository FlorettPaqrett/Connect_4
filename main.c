
int connct_4()
{
  int  winner;
  
  winner = loop();
  if (winner == 1)
  {
    printf("Le joueur 1 gagne !\n");
    return (1);
  }
  else if (winner == 2)
  {
    printf("Le joueur 2 gagne !\n");
    return (2);
  }
  else if (winner == 0)
  {
    printf("Egalité !\n");
    return (0);
  }
  else 
    retun (84);
}

int main()
{
  return (connect_4());
}
