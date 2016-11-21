#ifndef LISTNODE_H
#define LISTNODE_H
template< typename NODE > class List;

template< typename NODE >
class ListNode
{
    friend class List< NODE >;
public:
    ListNode(const NODE &info):data(info),nextPtr(nullptr){}
    NODE getData()
    {
        return this->data;
    }

private:
    NODE data;
    ListNode<NODE> *nextPtr;
};
#endif // LISTNODE_H
