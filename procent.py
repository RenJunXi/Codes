<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>个人中心</title>
</head>
<body>
    <h1>个人中心</h1>
    <table>
        <tr>
            <td>昵称</td>
            <td>邮箱</td>
            <td>电话</td>
        </tr>
        <tr>
            <td>{{ user.nickname }}</td>
            <td>{{ user.email }}</td>
            <td>{{ user.phone_number }}</td>
        </tr>
    </table>
    <a href="{{ url_for('web.personal_edit') }}">修改</a>
</body>
</html>
