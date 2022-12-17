class Solution(object):
    def evalRPN(self, tokens):
        """
        :type tokens: List[str]
        :rtype: int
        """
        def sign(a):
            return (-1 if a < 0 else 1)
        op = {'+':lambda a,b:a+b,'-':lambda a,b:b-a,'*':lambda a,b:a*b,'/':lambda a,b:abs(b)/abs(a)*sign(a)*sign(b)}
        st = []
        for t in tokens:
            if t in op:
                st.append(op[t](st.pop(),st.pop()))
            else:
                st.append(int(t))
        
        return st[0]
