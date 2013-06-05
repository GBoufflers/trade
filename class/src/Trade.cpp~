#include		"Trade.hh"

Trade::Trade()
{
  this->_capital = 0;
  this->_nbJours = 0;
  this->_trend = 0;
  this->_old = 0;
  this->_actions = 0;
  this->_trend = 0;
}

Trade::~Trade()
{

}

void		Trade::doWait() const
{
  std::cout << "wait" << std::endl;  
}

void		Trade::doSell(int nb)
{
  int		pay;
  int		com;

  
  pay = nb * (this->_cours.front());
  com = pay * COM;
  if (nb <= this->_actions)
    {
      this->_capital += (pay - com);
      this->_actions -= nb;
      std::cout << "sell " << nb << std::endl;  
    }
  else
    doWait();
}

void		Trade::doBuy(int nb)
{
  int		pay;
  int		com;

  pay = nb * (this->_cours.front());
  com = pay * COM;
  if (this->_capital >= (pay + com))
    {
      this->_capital -= (pay + com);
      this->_actions += nb;
      std::cout << "buy " << nb << std::endl;  
    }
  else
    doWait();
}

void		Trade::checkTrend()
{
  if (this->_old > (this->_cours.front()))
    this->_trend--;
  if (this->_old < (this->_cours.front()))
    this->_trend++;
  if (this->_trend == -1)
    doSell(1);
  else if (this->_trend == 1)
    doBuy(1);
  else
    doWait();
}

void		Trade::action(std::string input)
{
  this->_old = stringToInt(input);
  if (this->_cours.size() == 0 || this->_cours.size() == 1)
    doWait();
  else
    checkTrend();
}

void		Trade::run()
{
  std::string	input;

  // capital
  std::cin >> input;
  this->_capital = stringToFloat(input);
  // nombre de jours
  std::cin >> input;
  this->_nbJours = stringToInt(input);
  // cours
  std::cin >> input;
  while (input != "--end--")
    {
      this->action(input);
      this->_cours.push_front(stringToInt(input));
      this->_nbJours++;
      std::cin >> input;
    }
}
