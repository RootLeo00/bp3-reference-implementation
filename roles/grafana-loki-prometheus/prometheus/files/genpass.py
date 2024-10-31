import sys
import bcrypt

if len(sys.argv) != 2:
    raise Exception("password not provided")
    exit(1)

password = sys.argv[1]
hashed_password = bcrypt.hashpw(password.encode("utf-8"), bcrypt.gensalt())
print(hashed_password.decode())