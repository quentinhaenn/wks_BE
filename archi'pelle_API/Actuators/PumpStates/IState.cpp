
class IState
{
private:
    /* data */
public:

    virtual ~IState() = 0;
    virtual void switchOn() = 0;
    virtual void switchOff() = 0;
};
